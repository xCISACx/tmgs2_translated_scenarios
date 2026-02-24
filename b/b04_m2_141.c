section "b04_m2_141"{
    int var0 = Date_GetDateOption(2, 36);
    Background_Bg_GS2("BG_NE220_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_095_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Message_MsgSel("That play was the best!", "That play was so-so.", "That play was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402141_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I had no clue what was going on.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402141_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'm not interested...\nso I can't say anything.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402141_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah... I don't know what's what.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0402141_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You were...\nin a daze while watching it.");
        Message_MsgSel("Wasn't it really interesting?", "I was moved by their energy.", "I couldn't hear the lines well...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402141_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nWell, I didn't say it wasn't\ninteresting.\nWhy are you so worked up?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402141_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah... They were passionate.\nThere were also lots of things to\nlearn.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402141_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, it was a little hard to hear.\nIt's like they were talking from\ntheir stomachs.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402141_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Today's play... was relatively good.");
        Message_MsgSel("I didn't want it to end...", "I want to watch it 10 more times!", "There was a cool actor.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402141_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That's exaggerating.\nWell, if there was a chance, it'd be\nnice if we came to watch it again.");
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
            Voice_PlayVoice("B0402141_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I wouldn't go that far. Well...\nmaybe if it was like this.");
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
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402141_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Eh.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402141_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Eh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "You also look like you could be an\nactor, ｛Shiba＊＊｝.");
                Voice_PlayVoice("B0402141_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Me? An actor?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.\nIt looks like you'd shine on stage,\nand you'd be very popular!");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402141_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......");
                Voice_PlayVoice("B0402141_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It'd be impossible for you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh, why?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402141_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Even if you had the chance to be\none...\nI wouldn't let you be one.\nI wouldn't want you to be one.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝...)");
                }
            break ;
            }
        }
    }
