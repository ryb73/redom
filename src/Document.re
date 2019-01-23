open ReDomTypes;

type t;

[@bs.val] external document: t = "";
let wrap = (f) =>
    (~document=document) => f(document);
let wrapU = (f) =>
    (~document=document, ()) => f(document);

[@bs.get] external body: t => element(body) = "";
[@bs.send] external createElement: t => string => element(unit) = "createElement";
[@bs.send] external getElementById:
    (t, string) => Js.nullable(element(unit)) = "getElementById";

let body = wrapU(body);
let createElement = wrap(createElement);

let getElementById = (~document=document, id) =>
    wrap(getElementById)(~document, id)
    |> Js.Nullable.toOption;
