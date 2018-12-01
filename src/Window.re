type t = Types.window;

[@bs.val] external window : t = "";
let _wrap = (f) =>
    (~window=window) => f(window);
let _wrapU = (f) =>
    (~window=window, ()) => f(window);

[@bs.send]
external onMessage : (t, [@bs.as "message"] _, MessageEvent.t => unit) => unit
    = "addEventListener";
let onMessage = _wrap(onMessage);

[@bs.send] external clearMessageListener :
    (t, [@bs.as "message"] _, MessageEvent.t => unit) => unit = "removeEventListener";
[@bs.send] external postMessage : (t, Js.Json.t, string) => unit = "";
[@bs.get] external parent : t => t = "";
[@bs.get] external opener : t => Js.Nullable.t(t) = "opener";
[@bs.send] external open_ : t => string => string => Js.null(t) = "open";
[@bs.send] external close : t => unit = "";
[@bs.send] external alert : t => string => unit = "";
[@bs.send] external prompt :
    (t, ~message:string=?, ~default:string=?, unit) => Js.null(string) = "prompt";

let clearMessageListener = _wrap(clearMessageListener);
let postMessage = _wrap(postMessage);
let parent = _wrapU(parent);
let close = _wrapU(close);
let alert = _wrap(alert);

let opener = (~window=window, ()) =>
    opener(window) |> Js.Nullable.toOption;

let open_ = (~window=window, ~name="__blank", url) =>
    open_(window, url, name)
    |> Js.Null.toOption;

let prompt = (~window=window, ~message=?, ~default=?, ()) =>
    prompt(window, ~message?, ~default?, ())
    |> Js.Null.toOption;
