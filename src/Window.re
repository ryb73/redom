open SharedTypes;

external onMessage : window => _ [@bs.as "message"] => (MessageEvent.t => unit)
    => unit = "addEventListener" [@@bs.send];

external postMessage : window => Js.Json.t => string => unit = "" [@@bs.send];
external parent : window => window = "" [@@bs.get];