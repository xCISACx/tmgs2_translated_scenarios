section "b04_m2_232"{
    int var0 = Date_GetDateOption(2, 69);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402232_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "*phew*...\nThe summit was actually quite high\nup.");
        Message_MsgSel("I'm glad we enjoyed the view with ease!", "I got sleepy because it was so easygoing.", "The couple behind us was something else.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402232_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It wasn't nice at all.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402232_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I was overwhelmed too, but in a\ndifferent way...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402232_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "......... Why did we ride this?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402232_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Even though this ferris wheel only\ngoes around once, it takes quite a\nlong time...");
        Message_MsgSel("So we can be satisfied with the nice view.", "It should go around faster.", "It'd still be fine if it were slower▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402232_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI'm already satisfied with scenery\nwhen I'm halfway up.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402232_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That would be a little...\nNo matter if it's fast or slow, I'll\npass.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0402232_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "*sigh*... Give me a break.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402232_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The ferris wheel...\nis a ride that doesn't give you any\nsense of accomplishment.");
        Message_MsgSel("It should have a more fun component to it.", "That's why we can escape from reality...", "I'd like to reserve a spot on the ride.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402232_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'd still be worried if it rolled\naround...\nWell it might be better than sitting\non a crowded bench.");
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
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402232_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nWhat's with you, all of a sudden?\nDo you have any problems?");
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
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402232_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Pass.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402232_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "With me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? Y-Yeah...");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402232_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Why?");
                Message_Who(0);
                Message_MsgDisp("主人公", "U-Uhh, umm...\nUh, even if you ask me with such a\nserious face, I can't really\nanswer...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402232_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah... my bad.\nYou were just speaking\nhypothetically, right?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402232_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nBut if you really want to do that,\nI...\nplan to... go with you.");
                Character_ChFace(0, 7, 0);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402232_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "If it's the two of us, it'd be fine.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
