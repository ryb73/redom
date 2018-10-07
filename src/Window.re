type t = ReDomSharedTypes.window;

[@bs.send]
external onMessage : (t, [@bs.as "message"] _, MessageEvent.t => unit)
    => unit = "addEventListener";

[@bs.send]
external clearMessageListener : (t, [@bs.as "message"] _, MessageEvent.t => unit)
    => unit = "removeEventListener";

[@bs.send] external postMessage : (t, Js.Json.t, string) => unit = "";

[@bs.get] external parent : t => t = "";

[@bs.get] external _opener : t => Js.Nullable.t(t) = "opener";
let opener = (window) => _opener(window) |> Js.Nullable.toOption;

[@bs.send] external _open : t => string => string => Js.null(t) = "open";
let open_ = (~name=?, window, url) =>
    _open(window, url, Belt.Option.getWithDefault(name, "__blank"))
    |> Js.Null.toOption;

[@bs.send] external close : t => unit = "";

[@bs.send.pipe: t] external alert : string => unit = "";

[@bs.send] external _prompt :
    (t, ~message:string=?, ~default:string=?, unit) => Js.null(string) = "prompt";
let prompt = (~message=?, ~default=?, window) =>
    _prompt(window, ~message?, ~default?, ());
