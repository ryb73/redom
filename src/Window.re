type t = ReDomSharedTypes.window;

[@bs.send]
external onMessage : (t, [@bs.as "message"] _, MessageEvent.t => unit)
    => unit = "addEventListener";

[@bs.send]
external clearMessageListener : (t, [@bs.as "message"] _, MessageEvent.t => unit)
    => unit = "removeEventListener";

[@bs.send] external postMessage : (t, Js.Json.t, string) => unit = "";

[@bs.get] external parent : t => t = "";

[@bs.send] external _open : t => string => string => Js.null(t) = "open";
let open_ = (~name=?, window, url) => _open(window, url, Belt.Option.getWithDefault(name, "__blank"));
