open Types;

type t;

[@bs.val] external document : t = "";
let _wrap = (f) =>
    (~document=document) => f(document);
let _wrapU = (f) =>
    (~document=document, ()) => f(document);

[@bs.send]
external getElementById : (t, string) => Js.nullable(element(unit)) = "getElementById";

[@bs.send] external createElement : t => string => element(unit) = "createElement";

let getElementById = (~document=document, id) =>
    _wrap(getElementById)(~document, id)
    |> Js.Nullable.toOption;

let createElement = _wrap(createElement);
