open Decco;

[@decco]
type t = {
    dataTransfer: [@decco.codec Codecs.magic] DataTransfer.t
};

external unsafeCast: _ => t = "%identity";
