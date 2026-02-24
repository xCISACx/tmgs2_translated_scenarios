section "b04_m2_021"{
    int var0 = Date_GetDateOption(2, 1);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402021_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The ocean and man-made things...\nTheir coexistence is going well.");
        Message_MsgSel("What a stylish place!", "Can they do anything else with this place?", "I'd hate for nature to disappear!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402021_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "This kind of place is stylish? Eh...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402021_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That might be a good idea.\nThe scenery would look dreary if it\nwas just concrete and metal.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 2, 2);
            Voice_PlayVoice("B0402021_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nYou don't have to forcibly argue\nagainst it, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(2, 2, (#1));
        Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402021_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Do I walk fast? If I do, tell me.");
        Message_MsgSel("Even if you ran, I'd be fine.", "It's just fine.", "Let's walk a little slower.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_BlinkStart(2, 0, (#1), 1);
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 2, 2);
            Voice_PlayVoice("B0402021_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No, I won't be running....\nWhy would I?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(2, 0, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402021_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Really?\nWe have a height difference, so tell\nme if I walk too fast.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(2, 0, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402021_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I thought so... Sorry.\nBut it was funny seeing you jogging\nto keep up with me.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402021_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "There are bricks laid out all\nover...\nIt looks like a scene I've seen\nsomewhere before.\nWas it in a movie...?");
        Message_MsgSel("Like an old movie.", "This path is hard to walk on.", "Then I'd be the heroine.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402021_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah... maybe.\nWhat was it called again? Ah, hmm...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402021_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Don't go falling over, because\nyou'll stand out, especially on this\npath.");
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
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402021_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You fantasize too much.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402021_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ehh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I was just j-joking, so don't look\nat me like that...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402021_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "A heroine needs a partner, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? Ah, yeah, right.");
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402021_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... So, I...");
                Message_Who(0);
                Message_MsgDisp("主人公", "What's wrong, ｛Shiba＊＊｝?");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 2, 2);
                Voice_PlayVoice("B0402021_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Pfft. What am I saying...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402021_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Hm, ah... Don't worry about it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
