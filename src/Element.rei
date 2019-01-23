type t('a) = ReDomTypes.element('a);

let appendChild: (~parent: t('a), ~child: t('b)) => t('b);
let fromDom: Dom.element => t(unit);
let innerHtml: t('a) => unit;
let onDrag: (DragEvent.t => unit, t('a)) => unit;
let onDragEnd: (DragEndEvent.t => unit, t('a)) => unit;
let setInnerHtml: (string, t('a)) => t('a);
let scrollWidth: t('a) => int;
let scrollHeight: t('a) => int;
let scrollLeft: t('a) => int;
let scrollTop: t('a) => int;
let tagName: t('a) => string;
