type t = Types.window;

[@bs.val] external window: t = "";
let wrap = (f) => (~window=window) => f(window);
let wrapU = (f) => (~window=window, ()) => f(window);

external asDict: t => Js.Dict.t(_) = "%identity";
let set = (~window=window, key, value) =>
    Js.Dict.set(asDict(window), key, value);

[@bs.send] external alert: t => string => unit = "";
[@bs.send] external close: t => unit = "";
[@bs.send] external clearMessageListener:
    (t, [@bs.as "message"] _, MessageEvent.t => unit) => unit = "removeEventListener";
[@bs.send] external onLoad:
    (t, [@bs.as "load"] _, LoadEvent.t => unit) => unit = "addEventListener";
[@bs.send] external onMessage:
    (t, [@bs.as "message"] _, MessageEvent.t => unit) => unit = "addEventListener";
[@bs.get] external opener: t => Js.Nullable.t(t) = "opener";
[@bs.send] external open_: t => string => string => Js.null(t) = "open";
[@bs.get] external parent: t => t = "";
[@bs.send] external postMessage: (t, Js.Json.t, string) => unit = "";
[@bs.send] external prompt:
    (t, ~message:string=?, ~default:string=?, unit) => Js.null(string) = "prompt";

let alert = wrap(alert);
let clearMessageListener = wrap(clearMessageListener);
let close = wrapU(close);
let onLoad = wrap(onLoad);
let onMessage = wrap(onMessage);
let parent = wrapU(parent);
let postMessage = wrap(postMessage);

let opener = (~window=window, ()) =>
    opener(window) |> Js.Nullable.toOption;

let open_ = (~window=window, ~name="__blank", url) =>
    open_(window, url, name)
    |> Js.Null.toOption;

let prompt = (~window=window, ~message=?, ~default=?, ()) =>
    prompt(window, ~message?, ~default?, ())
    |> Js.Null.toOption;
