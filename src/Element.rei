type t('a) = Types.element('a);

let fromDom: Dom.element => t(unit);
let tagName: t('a) => string;
let scrollWidth: t('a) => int;
let scrollHeight: t('a) => int;
let scrollLeft: t('a) => int;
let scrollTop: t('a) => int;
let onDrag: (t('a), DragEvent.t => unit) => unit;
let onDragEnd: (t('a), DragEndEvent.t => unit) => unit;
