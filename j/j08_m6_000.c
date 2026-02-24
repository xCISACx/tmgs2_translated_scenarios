section "j08_m6_000"{
    if (Parameter_ChkChar(6, 2) == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            SoundEffect_PlaySE(21, 127);
            System_Wait(#300);
            SoundEffect_StopSE(21, 0);
            Voice_PlayVoice("C0106000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hello, this is Amachi.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nIt's ｛主人公苗字｝\n｛主人公名前｝...");
            Voice_PlayVoice("C0106000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Umm...\nDo you have business with me?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Whoa, this is awkward～...\nBut I have to have a proper talk\nwith him...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "U-Umm, ｛Amachi＊＊｝...");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Voice_PlayVoice("C0106000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... No, it's fine.\nI also misunderstood...");
            Voice_PlayVoice("C0106000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay, I'm not worried anymore.");
            SoundEffect_PlaySE(31, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh.\nIt seems like we've made up, for the\ntime being.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            SoundEffect_PlaySE(21, 127);
            System_Wait(#300);
            SoundEffect_StopSE(21, 0);
            Voice_PlayVoice("C0106000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hello, this is Amachi.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nIt's ｛主人公苗字｝\n｛主人公名前｝...");
            Voice_PlayVoice("C0106000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... So you've called me.\nWhat do you want?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Whoa, this is awkward～...\nBut I have to have a proper talk\nwith him...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "U-Umm, ｛Amachi＊＊｝...");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Voice_PlayVoice("C0106000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... I get it.\nI'm only forgiving you this time.");
            Voice_PlayVoice("C0106000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You should be thanking my kindness.\nLater.");
            SoundEffect_PlaySE(31, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh.\nIt seems like we've made up, for the\ntime being.)");
            }
        Parameter_AddCh1Param(6, 62, #99);
        Parameter_AddCh1Param(6, 62, #99);
        Parameter_AddCh1Param(6, 62, #99);
        Parameter_AddCh1Param(6, 62, #99);
        Parameter_AddCh1Param(6, 62, #99);
        Parameter_AddCh1Param(6, 62, 80);
        Parameter_AddCh1Param(6, 62, 80);
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
