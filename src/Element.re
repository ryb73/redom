type t('a);

external fromDom : Dom.element => t(unit) = "%identity";

[@bs.get] external tagName : t(_) => string = "";
