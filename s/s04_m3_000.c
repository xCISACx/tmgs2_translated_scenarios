section "s04_m3_000"{
    int var0;
    if (Parameter_GetCh1Param(3, 130) <= 3){
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? I wonder who it is?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0403000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Happy New Year. It's Hikami.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nHappy New Year.");
        Voice_PlayVoice("S0403000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "My best regards for the new year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, but I should be the one saying\nthat.");
        Voice_PlayVoice("S0403000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Well, onto the main subject.\nThat is not the reason why I am\ncalling you so early on New Year's.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ehh...?");
        Voice_PlayVoice("S0403000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Of course it is because of the New\nYear's visit to the shrine.\nI am aiming for this.\nWould you like to go with me?");
        Message_MsgSel("Yes, with pleasure!", "Umm, I'm sorry...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0403000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see.\nI will come meet you after this\nthen.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, I'll get ready.");
            Voice_PlayVoice("S0403000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Roger.\nI assume that if you give me 10\nminutes to prepare, I can chime your\ndoorbell 40 minutes from now.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do until then?\nWhat will I wear?)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0403000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see.\nYou may have made plans beforehand.\nIt can't be helped.");
            Voice_PlayVoice("S0403000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I apologize for the sudden phone\ncall.\nGoodbye.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\ninvite me...\nMaybe it was wrong to decline...)");
            Parameter_AddCh1Param(3, 62, 4);
            var0 = 1;
            break ;
            }
        }
    else {
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? I wonder who it is?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0403000_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Happy New Year. It's Hikami.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nHappy New Year!");
        Voice_PlayVoice("S0403000_C00900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... W-Well!\nI am going to visit the shrine for\nNew Year's Day, after this.\nI do not want to go alone...");
        Voice_PlayVoice("S0403000_C01000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "A-Anyway!\nI waited for this chance...\nNo, the opportunity. Would you...\nlike to go together?");
        Message_MsgSel("Yes, of course!", "Er, umm... I'm sorry...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0403000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Really? That's good...\nOkay, I will come pick you up\nwithout delay.\nNo, I will give time for you to\nprepare.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, thank you.");
            Voice_PlayVoice("S0403000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Then with the time I am giving you,\nI will be there in 40 minutes.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I will start getting ready\nnow....\nWhat will I wear?)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0403000_C01300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I see. I...I am disappointed...\nI do not mind it...");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(It somehow feels like I did\nsomething bad...)");
            Parameter_AddCh1Param(3, 62, 4);
            var0 = 1;
            break ;
            }
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M3", 0);
        System_Call_GS2("S07", "M3", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M3", 0);
        break ;
        case 1:
        System_GlobalWork(0, 0, 3);
        System_GlobalWork(2, 0, 1);
        System_GlobalWork(4, 0, 1);
        break ;
        }
    }
