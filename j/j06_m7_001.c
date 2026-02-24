section "j06_m7_001"{
    Message_Who(0);
    Message_MsgDisp("主人公", "(What should I do...)");
    Message_MsgSel("Raise my hand.", "Don't raise my hand.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll participate!)");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0607000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Uhh... Okay, I understand.\nI am relieved, it seems like there\nare many people who will be\nparticipating.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("J0607000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "To those people who are\nparticipating, I am in your debt.\nHomeroom is over.");
        Character_Chara_GS2(7, "NON");
        SoundEffect_PlayStream(2, "SS_T_00_999_M00");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Next Sunday, huh...\nI must make sure that I don't sleep\nin.)");
        Date_SetNextSandayDateEvent(7);
        break ;
        case 1:
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("J0607000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... Huh? Is everyone busy?");
        Character_BlinkStart(7, 3, (#1));
        Voice_PlayVoice("J0607000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Then homeroom is over.\nDon't worry about me. *sigh*...");
        Character_Chara_GS2(7, "NON");
        SoundEffect_PlayStream(2, "SS_T_00_999_M00");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm, I wonder if I should have put\nmy hand up.)");
        Parameter_AddCh1Param(7, 60, #5);
        break ;
        }
    SoundEffect_StopStream(2, 40);
    }
