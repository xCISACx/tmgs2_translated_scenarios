section "p84_m2_000"{
    Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry to keep you waiting,\n｛Shiba＊＊｝!\nOkay, 100 copies!");
            Voice_PlayVoice("P7402000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You're already done? Nice skills....\nThanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Teehee!\nI was praised by\n｛Shiba＊＊｝!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry to keep you waiting,\n｛Shiba＊＊｝!\nOkay, 10 copies!");
            Voice_PlayVoice("P7402000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... And the rest of the 90?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh! Did I only give you 10...?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7402000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I'll do the rest myself.\nTell me where the copier is.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, big mistake...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Good, I found it easily!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("P7402000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Ah.");
            Voice_PlayVoice("P7402000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nBringing an improvised sign while\nyelling and walking, will surely\nstand out.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I guess?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7402000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You are pretty quick-witted.\nI misjudged you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Teehee!\nI was praised by\n｛Shiba＊＊｝!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("P7402000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You still haven't found it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Voice_PlayVoice("P7402000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIt seems like it won't be making any\nprogress by broadcasting it on\nschool's radio.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uh...\nUmm, I didn't have the time to\nsearch because I was too busy...");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7402000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIn that case, mention that\nbeforehand....\nI'll go find it.");
            Character_Chara_GS2(2, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, I made him angry...\nReal big mistake...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("", 2, "P7402000_B00900");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝. How was it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, mission accomplished.");
            Message_Who(0);
            Message_MsgDisp("主人公", "There was an issue with the gym\ntime.\nWe made reservations on the grounds\nfor the basketball club to transfer.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7402000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Your job is over things like that,\ntoo?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Of course, I'm the floor manager▼");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7402000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Huh... that's something.\nAs expected.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Teehee!\nI was praised by\n｛Shiba＊＊｝!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("", 2, "P7402000_B01200");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝. How was it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I couldn't attract anyone's\nattention, so I made the decision by\nrock, paper, scissors but it made\nthe situation worse...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7402000_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nThat kind of correspondence is\nterrible...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh... I guess...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh* Big mistake...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
