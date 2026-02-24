section "p64_m3_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, that went well!)");
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P6403000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "What an amazing applause.\nYour performance was splendid.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hikami＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, what a big mistake...)");
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("P6403000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... You did ridiculous.\nThat stood out.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Aah～, I should have practiced\nmore...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, it somehow managed to be a\nsuccess!)");
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P6403000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "A pleasant performance.\nYou blew off any fatigue from the\ntask.\nYour part was also very good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hikami＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, what a big mistake...)");
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("P6403000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThat is not the result of completed\npractice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have taken practices more\nseriously...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, it somehow managed to be a\nsuccess!)");
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("P6403000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... You have talent.\nMoreover, I wanted you to hear that.\nIt is a shame this is the last\nculture festival.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hikami＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, what a big mistake...)");
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(3, 3, (#1));
            Voice_PlayVoice("P6403000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... My ears grow weary.\nIn spite of that, this was the last\nculture festival...\nIt was rather disappointing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have taken practices more\nseriously...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
