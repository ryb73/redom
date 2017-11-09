type t;

external _getElementById : t => string => Js.nullable (Element.t unit) = "getElementById" [@@bs.send];
let getElementById document id => Js.Nullable.to_opt @@ _getElementById document id;