type t 'a;

external make : Dom.element => t unit = "%identity";

external tagName : t _ => string = "" [@@bs.get];