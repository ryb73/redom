open Types;

type t;

[@bs.val] external document: t = "";
let _wrap = (f) =>
    (~document=document) => f(document);
let _wrapU = (f) =>
    (~document=document, ()) => f(document);

[@bs.get] external body: t => element(body) = "";
[@bs.send] external createElement: t => string => element(unit) = "createElement";
[@bs.send] external getElementById:
    (t, string) => Js.nullable(element(unit)) = "getElementById";

let body = _wrapU(body);
let createElement = _wrap(createElement);

let getElementById = (~document=document, id) =>
    _wrap(getElementById)(~document, id)
    |> Js.Nullable.toOption;
