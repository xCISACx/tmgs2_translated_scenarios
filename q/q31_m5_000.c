section "q31_m5_000"{
    if (Parameter_GetCh1Param(5, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Chris＊＊｝ is...\nAh, he's here!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Chris＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Voice_PlayVoice("Q0905000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Good morning. Right on time.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah. Are you ready?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q0905000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah. Let's go.");
        }
    else if (Parameter_GetCh1Param(5, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Chris＊＊｝ is...\nAh, he's here!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Chris＊＊｝!");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(5, "M5_01F", 0);
        Voice_PlayVoice("Q0905000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Good morning.\nThe weather is nice today.\nYour smile is so radiant▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha, really? Should we head out?");
        Voice_PlayVoice("Q0905000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah.");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Chris＊＊｝ is...\nAh, he's here!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Chris＊＊｝!");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Voice_PlayVoice("Q0905000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Good morning.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Did you just get up?");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(5, 3, (#1));
        Voice_PlayVoice("Q0905000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "No. Too dazzling.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, the sunlight?\nThe weather is nice today.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(5, 2, (#1));
        Voice_PlayVoice("Q0905000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "But it's no match for your smile.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("Q0905000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Let's go.\nI get the feeling that today will be\nfun.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yeah.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
