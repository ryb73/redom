type t = Types.window;

[@bs.val] external window: t = "";
let wrap = (f) => (~window=window) => f(window);
let wrapU = (f) => (~window=window, ()) => f(window);

external asDict: t => Js.Dict.t(_) = "%identity";
let set = (~window=window, key, value) =>
    Js.Dict.set(asDict(window), key, value);

type listener = Js.Json.t => unit;

[@bs.send] external alert: t => string => unit = "";
[@bs.send] external close: t => unit = "";
[@bs.send] external onLoad:
    (t, [@bs.as "load"] _, Events.LoadEvent.t => unit) => unit = "addEventListener";
[@bs.send] external onMessage:
    (t, [@bs.as "message"] _, listener) => unit = "addEventListener";
[@bs.get] external opener: t => Js.Nullable.t(t) = "opener";
[@bs.send] external open_: t => string => string => Js.null(t) = "open";
[@bs.get] external parent: t => t = "";
[@bs.send] external postMessage: (t, Js.Json.t, string) => unit = "";
[@bs.send] external prompt:
    (t, ~message:string=?, ~default:string=?, unit) => Js.null(string) = "prompt";
[@bs.send] external removeMessageListener:
    (t, [@bs.as "message"] _, listener) => unit = "removeEventListener";

let alert = wrap(alert);
let close = wrapU(close);
let onLoad = wrap(onLoad);
let parent = wrapU(parent);
let postMessage = wrap(postMessage);

let onMessage = (~window=window, listener) => {
    let listener = (json) =>
        Events.MessageEvent.t_decode(json)
        |> Belt.Result.getExn
        |> listener;

    onMessage(window, listener);
    listener;
};

let opener = (~window=window, ()) =>
    opener(window) |> Js.Nullable.toOption;

let open_ = (~window=window, ~name="__blank", url) =>
    open_(window, url, name)
    |> Js.Null.toOption;

let prompt = (~window=window, ~message=?, ~default=?, ()) =>
    prompt(window, ~message?, ~default?, ())
    |> Js.Null.toOption;

let removeMessageListener = (~window=window, listener) =>
    removeMessageListener(window, listener);
