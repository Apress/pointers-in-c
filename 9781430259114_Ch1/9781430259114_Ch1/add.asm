;	COMDAT ?add@@YAHHH@Z
_TEXT	SEGMENT
_v1$ = 8						; size = 4
_v2$ = 12						; size = 4
?add@@YAHHH@Z PROC					; add, COMDAT
; Line 7
	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-192]
	mov	ecx, 48				; 00000030H
	mov	eax, -858993460			; ccccccccH
	rep stosd
; Line 8
	mov	eax, DWORD PTR _v1$[ebp]
	add	eax, DWORD PTR _v2$[ebp]
; Line 9
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
