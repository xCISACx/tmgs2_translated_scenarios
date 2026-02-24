section "b04_m2_076"{
    int var0 = Date_GetDateOption(2, 23);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402076_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Maybe it's because it's cold...\nbut I don't really sense the\npresence of any living things here.");
        Message_MsgSel("The dead trees look so desolate.", "Doing this once in a while is nice.", "It's cold, I can't move.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 9);
            Character_BlinkStart(2, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402076_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, since there are no leaves.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402076_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "There aren't that many people, too.\nIt's nice when it's quiet.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0402076_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It's not that cold, right?\nDon't be weak.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402076_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Eh...\nThere are actually people besides us\ntaking a walk here....\nEven though it's cold.");
        Message_MsgSel("We won't be losing to them!", "Aren't you cold too, ｛Shiba＊＊｝?", "There are curious people here.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402076_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... How is this a competition?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402076_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hm? Ah, I'm fine. Ah...\nAre you cold?\nDo you wanna go drink something\nwarm?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402076_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right. Including us.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        SoundEffect_PlayStream(3, "SS_T_00_074_M00");
        Voice_PlayVoice("B0402076_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... The cold, wintry wind.\nThe park during Winter somehow feels\nso lonely.");
        Message_MsgSel("I'm not lonely since you're here▼", "I can't handle this loneliness.", "The scenery looks dreary...");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402076_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I don't like those kinda jokes.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402076_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Quit joking around.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uh...\nSorry for saying weird things...");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402076_B01010", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah... Sorry.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402076_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "But... Right, me too...");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402076_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I might not be feeling lonely right\nnow.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0402076_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well, it's not so bad where I would\nsay that I can't handle it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402076_B01400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Now that you mention it, it might\nseem that way.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        SoundEffect_StopStream(3, 40);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
