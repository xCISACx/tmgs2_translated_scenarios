section "j08_m5_000"{
    if (Parameter_ChkChar(5, 2) == 0){
        SoundEffect_PlaySE(21, 127);
        System_Wait(#300);
        SoundEffect_StopSE(21, 0);
        Voice_PlayVoice("C0105000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hello?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝?\nIt's ｛主人公苗字｝\n｛主人公名前｝...");
        Voice_PlayVoice("C0105000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah.... Uhh, sorry.\nI'm heaps busy right now.");
        Voice_PlayVoice("C0105000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "If you wanna talk, make it as short\nas possible.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Whoa, this is awkward～.\nBut I have to have a proper talk\nwith him...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "U-Umm, ｛Chris＊＊｝...");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Voice_PlayVoice("C0105000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Sorry. I misunderstood.");
        Message_Who(0);
        Message_MsgDisp("主人公", "You didn't do anything wrong,\n｛Chris＊＊｝...");
        Voice_PlayVoice("C0105000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Crap～.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Voice_PlayVoice("C0105000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "If things stay like this, we'll just\nend up apologizing to each other\nnon-stop.\nI'll end it now.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Okay.");
        Voice_PlayVoice("C0105000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Thanks for calling.\nI will see you later.");
        SoundEffect_PlaySE(31, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like he has forgive me.\nThank gosh...)");
        Parameter_AddCh1Param(5, 62, #99);
        Parameter_AddCh1Param(5, 62, #99);
        Parameter_AddCh1Param(5, 62, #99);
        Parameter_AddCh1Param(5, 62, #99);
        Parameter_AddCh1Param(5, 62, #99);
        Parameter_AddCh1Param(5, 62, 80);
        Parameter_AddCh1Param(5, 62, 80);
        }
    else {
        SoundEffect_PlaySE(23, 127);
        SoundEffect_PlaySE(23, 127);
        Message_Who(0);
        Message_MsgDisp("　　　", "*beep* *beep* *beep* ......");
        SoundEffect_StopSE(23, 0);
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like I can't connect...)");
        }
    }
