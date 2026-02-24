section "b04_m2_144"{
    int var0 = Date_GetDateOption(2, 39);
    Background_Bg_GS2("BG_NE250_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_10_P83_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402144_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "My ears hurt. My head also hurts.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402144_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Was it... \"so-so\"?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402144_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Then why did we come here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402144_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "That really deep sound is rumbling\nin my head and stomach....");
        Message_MsgSel("It's a little loud...", "Isn't the rhythm pleasant?", "This place is noisy～!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402144_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Yeah. Are you ears fine?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402144_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Maybe...\nIt's not the place to try and get\ninto the rhythm, right...?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402144_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Idiot, don't say that so loudly.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402144_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's hot, it's cramped...\nIt seems like I'll suffer from a\nlack of oxygen...");
        Message_MsgSel("Don't worry about that!", "My throat is dry...", "Maybe you stand out in this place?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402144_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I don't follow... I'm leaving.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402144_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Me too.\nLet's go drink something later.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0402144_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah. This place is the worst.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0402144_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Right... Probably.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah... I didn't mean it in a bad way.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402144_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "No, don't worry about it.\nI knew that from the start.");
                Message_Who(0);
                Message_MsgDisp("主人公", "...?");
                Voice_PlayVoice("B0402144_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I only came here because you said\nyou wanted to come here.");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 2, 1);
                Voice_PlayVoice("B0402144_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nSo even if it's a place where I know\nI'll stand out, if it's what you\nwant...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402144_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I'll go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Wow...\nI feel somewhat embarrassed...)");
                }
            break ;
            }
        }
    }
