section "p54_m5_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5405000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wow～. It's so unique.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hehe, thanks.");
            Voice_PlayVoice("P5405000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Himeko-chan would be extremely happy\nwith this, right?\nI want to show it to her.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was praised by\n｛Chris＊＊｝!)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5405000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "This is bad～...");
            Voice_PlayVoice("P5405000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Himeko-chan is walking this way with\na really mean face...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh!? W-Where?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P5405000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... I can't help but feel that way.\nIf it looks like she's going to yell\nat you, call me too, so we can get\nyelled at together.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nI should have attended my club\nactivities.)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5405000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm glad that everyone is happy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!");
            Voice_PlayVoice("P5405000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "When I look at it like this, it's so\npretty.\nI'm glad that you could make\nsomething like this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I was serious about\nattending club activities!)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5405000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... It's wrecked...");
            Message_Who(0);
            Message_MsgDisp("主人公", "My finishing touches may have been\nbad...");
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("P5405000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Don't say that.\nIt's something that everyone made,\nso it's something all are\nresponsible for.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5405000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Let's hold a meeting to reflect on\nthis later.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, I should have been more serious\nabout attending club acitivities.)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(5, "M5_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5405000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm glad that there are still yummy\nthings left over...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yummy things? It's not food.");
            Voice_PlayVoice("P5405000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm so touched.\nI'm real glad that you could make\nsomething like this.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5405000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thanks. It's a good memory...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Chris＊＊｝...)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5405000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... This...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah. It's something I drew...");
            Voice_PlayVoice("P5405000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The last group piece............");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, I made him sad.\nSorry, ｛Chris＊＊｝...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
