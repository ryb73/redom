type t('a) = Types.element('a);

external fromDom : Dom.element => t(unit) = "%identity";

[@bs.get] external tagName : t(_) => string = "";

[@bs.get] external scrollWidth : t(_) => int = "";
[@bs.get] external scrollHeight : t(_) => int = "";
[@bs.get] external scrollLeft : t(_) => int = "";
[@bs.get] external scrollTop : t(_) => int = "";

[@bs.send]
external onDrag : (t(_), [@bs.as "drag"] _, DragEvent.t => unit)
    => unit = "addEventListener";

[@bs.send]
external onDragEnd : (t(_), [@bs.as "dragend"] _, DragEndEvent.t => unit)
    => unit = "addEventListener";
