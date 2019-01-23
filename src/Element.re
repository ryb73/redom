type t('a) = ReDomTypes.element('a);

external fromDom: Dom.element => t(unit) = "%identity";

[@bs.send.pipe: t(_)] external appendChild: t('a) => t('a) = "";
[@bs.get] external innerHtml: t('a) => unit = "innerHTML";
[@bs.send.pipe: t(_)] external onDrag:
    ([@bs.as "drag"] _, DragEvent.t => unit) => unit = "addEventListener";
[@bs.send.pipe: t(_)] external onDragEnd:
    ([@bs.as "dragend"] _, DragEndEvent.t => unit) => unit = "addEventListener";
[@bs.set] external setInnerHtml: t('a) => string => unit = "innerHTML";
[@bs.get] external scrollWidth: t(_) => int = "";
[@bs.get] external scrollHeight: t(_) => int = "";
[@bs.get] external scrollLeft: t(_) => int = "";
[@bs.get] external scrollTop: t(_) => int = "";
[@bs.get] external tagName: t(_) => string = "";

let appendChild = (~parent, ~child) => appendChild(child, parent);

let setInnerHtml = (html, elem) => {
    setInnerHtml(elem, html);
    elem;
};