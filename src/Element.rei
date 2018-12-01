type t('a) = Types.element('a);

let appendChild: (t('a), t('b)) => t('a);
let fromDom: Dom.element => t(unit);
let tagName: t('a) => string;
let scrollWidth: t('a) => int;
let scrollHeight: t('a) => int;
let scrollLeft: t('a) => int;
let scrollTop: t('a) => int;
let onDrag: (DragEvent.t => unit, t('a)) => unit;
let onDragEnd: (DragEndEvent.t => unit, t('a)) => unit;
