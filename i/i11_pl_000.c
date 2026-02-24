section "i11_pl_000"{
    if (Parameter_GetPl1Param(26) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's an e-mail about job\nrecruitment...\nA cafe, is it? Huh?\nWhere have I heard \"Sangosho\"\nbefore...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, they urgently need staff!\nI might not get hired if I don't\nrespond soon...\nWhat should I do?)");
        Message_MsgSel("Reply with an application.", "Don't apply for the job.");
        switch (Message_TextSelect()){
            case 0:
            SoundEffect_PlayStream(3, "SS_T_00_292_M00");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'll try applying! ... It's sent.)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It'd be nice if I got a good\nresponse.)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            System_Call_GS2("I12", "PL", 0);
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm...\nI'll think about it for a little\nlonger.)");
            Message_CloseMsg();
            break ;
            }
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(I've got another job right now, so\nI won't apply.)");
        Message_CloseMsg();
        }
    }
