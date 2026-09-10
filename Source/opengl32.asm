.data
	extern external_target : qword

.code
	JumpToTarget proc
		jmp qword ptr [external_target]
	JumpToTarget endp

end