section "p74_m5_000"{
    Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh, somehow, it seems like\nit went well.)");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝!\nHow was it?");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P8405000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It was perfect.\nYour walk and your expressions were\nalso perfect.\nIt was a huge success.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was praised by\n｛Chris＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I f-fell over.\nWhat a huge failure...)");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
            Voice_PlayVoice("P8405000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Are you okay?\nYour legs and your butt.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I'm fine.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8405000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Maybe you should have worn casual\nclothes.");
            Voice_PlayVoice("P8405000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "People probably saw your underwear.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... How embarrassing...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh, somehow, it seems like\nit went well.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝!\nHey, how was it?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8405000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That smiling face of yours when you\npaused was heaps radiant...");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P8405000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It made my chest tighten.\nIt was amazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was praised by\n｛Chris＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nThat was a big failure...)");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝...");
            Voice_PlayVoice("P8405000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Are you okay? That was some fall...");
            Voice_PlayVoice("P8405000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It was so spectacular.\nIt seems like there were lots of\npeople who thought that it was part\nof the performance.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8405000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If they think about it that way, it\nmeans that your falling techniques\nare good, so don't be so worried\nabout it, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nI didn't show him anything good...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh, somehow, it seems like\nit went well.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝!\nHey, how was it?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8405000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The moment you appeared, it was\ncompletely silent.\nDid you notice?");
            Message_Who(0);
            Message_MsgDisp("主人公", "No.");
            Character_BlinkStart(5, 0, (#1));
            Voice_PlayVoice("P8405000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Everyone was fascinated, you know?\nMe too, I couldn't even say\nanything.\nBut...");
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P8405000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "As an audience member, that's the\nfirst and last time I want to see\nthat.\nFor real.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P8405000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You were real pretty.\nYou've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was praised by\n｛Chris＊＊｝!\nI'm so happy!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nThat was a big failure...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝...");
            Voice_PlayVoice("P8405000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nThis was just a rehearsal, right?\nThere's no need to be so down.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("P8405000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "When we do the real thing, I'll be\nright next to you to save you.\nSo relax.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8405000_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Just kidding.\nAnyway, are you hurt?");
            Voice_PlayVoice("P8405000_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It was a spectacular fall!\nBut you might get a bruise.\nYou have to take care.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I will.\nThanks, ｛Chris＊＊｝.");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
