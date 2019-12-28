type t('a) = ReDomTypes.element('a);

let fromDom: Dom.element => t(unit);

let appendChild: (~parent: t(_), ~child: t('child)) => t('child);
let focus: t(_) => unit;

let innerHtml: t(_) => unit;
let setInnerHtml: (string, t('a)) => t('a);

let onDrag: (DragEvent.t => unit, t(_)) => unit;
let onDragEnd: (DragEndEvent.t => unit, t(_)) => unit;
let scrollWidth: t(_) => int;
let scrollHeight: t(_) => int;
let scrollLeft: t(_) => int;
let scrollTop: t(_) => int;
let tagName: t(_) => string;
