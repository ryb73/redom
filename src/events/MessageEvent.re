open Decco;

[@decco]
type t = {
    data: Js.Json.t,
    origin: string,
    source: [@decco.codec Codecs.magic] Dom.window,
};
