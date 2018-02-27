open ReDomSharedTypes;

[@bs.send]
external onMessage : (window, [@bs.as "message"] _, MessageEvent.t => unit)
    => unit = "addEventListener";

[@bs.send] external postMessage : (window, Js.Json.t, string) => unit = "";

[@bs.get] external parent : window => window = "";
