type t;

[@bs.send]
external _getElementById : (t, string) => Js.nullable(Element.t(unit)) = "getElementById";
let getElementById = (document, id) =>
    _getElementById(document, id)
        |> Js.Nullable.toOption;

[@bs.send]
external _createElement : t => string => Element.t(_) = "createElement";