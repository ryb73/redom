type t;

[@bs.send]
external _getElementById : (t, string) => Js.nullable(Element.t(unit)) = "getElementById";
let getElementById = (document, id) =>
    _getElementById(document, id)
        |> Js.Nullable.to_opt;
