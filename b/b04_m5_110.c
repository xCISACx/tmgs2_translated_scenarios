section "b04_m5_110"{
    int var0 = Date_GetDateOption(2, 31);
    Character_Chara_GS2(5, "M5_09F", 0);
    Background_Bg_GS2("BG_FP610_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_610_000", 127, 40);
    System_Call_GS2("B02", "M5", 10);
    if (var0 == 0){
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("B0405110_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Do you like swimming?");
        Message_MsgSel("If it's swimming, leave it to me!", "I'm alright at it.", "I would like you to teach me how to swim.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 3);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(5, "M5_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0405110_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You've got some confidence.\nYour form is kinda nice▼");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetPl1Param(19) < 40){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405110_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "That's not swimming, that's\ndoggy-paddling...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_09F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405110_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, me too.\nLet's relax then▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405110_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Then let's both take a swimming\nlesson together.\nOur goal today is to master the\nbutterfly stroke.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("B0405110_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Pools are nice～▼");
        Message_MsgSel("Your nose is bleeding, ｛Chris＊＊｝.", "I'll go swim by myself.", "Look at me more!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405110_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh, really?\nA mirror, I need a mirror...\nIs it really?\nOr did you mean something else?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405110_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Relax～... Hm?\nWere you jealous just now?\nHey, you were jealous, right▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405110_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wah! W-What's wrong?\nWhy are you so angry?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("B0405110_E00900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah. That lady just now...");
        Message_MsgSel("... Her swimsuit was something else.", "Eh? That was a lady?", "I've seen her face somewhere before.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0405110_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah, it's really daring...\nAh, I mean no!\nI didn't mean that, I meant...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405110_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah, it's really daring...");
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 4);
                Voice_PlayVoice("B0405110_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, no!\nThat's not it, I mean, Wasn't that\nperson someone we have seen before?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... I don't know her.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405110_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Ah, then maybe I'm mistaken?");
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0405110_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I had no intention of trying to chat\nher up, okay?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0405110_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm not supposed to do those kinda\nthings when I'm with you...");
                Message_Who(0);
                Message_MsgDisp("主人公", "............");
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405110_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Why are you smiling?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Sorry, I lied.\nI've seen that lady on TV before.");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 7, 0);
                Voice_PlayVoice("B0405110_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Wh.........");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, sorry.");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405110_E01800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You scared me...\nYou really scared me...");
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405110_E01900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ugh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!? ｛Chris＊＊｝!?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0405110_E02000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Kidding. It was my revenge.\nNow we're eventful▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's \"even\", not \"eventful\"...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, that surprised me...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_09F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405110_E02100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Eh? That lady... Eh? Ehh?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_09F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405110_E02200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You thought so, too?\nUmm, who is she...?\nEven though she's here, I can't\nremember.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
