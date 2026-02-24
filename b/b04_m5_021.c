section "b04_m5_021"{
    int var0 = Date_GetDateOption(2, 1);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405021_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "This place feels good.");
        Message_MsgSel("What a stylish place!", "Is there anything else to do here?", "I'd hate for nature to disappear!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405021_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nThis place is perfect for walking.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405021_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "There may be more places.\nI look forward to it～.");
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
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0405021_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hmm.\nEven if you say that, I don't really\nget the feeling that it's\ndisappearing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(5, 2, (#1));
        Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405021_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hm? There are lots of people.\nI wonder what they're doing.");
        Message_MsgSel("Just relaxing, perhaps.", "Cleaning?", "Everyone's got nothing to do.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405021_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That's good...\nYeah, let's go dreamily look out at\nthe ocean.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405021_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Are they doing boy scout jobs?\nIf they are, should we also go and\nhelp?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0405021_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Us too, if you think about it...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405021_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The blue sky is like a canvas.\nWhat would you draw on it?");
        Message_MsgSel("Lots of flowers, maybe.", "Raging thunder, maybe.", "White clouds, perhaps.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405021_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That's a good idea.\nIt seems like white and yellow\nflowers will look pretty in the sky.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1), 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0405021_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Thunder? On a blue sky?\nHow harsh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405021_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "......... Thunder?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? Y-Yeah...");
                Character_ChFace(0, 2, 0);
                Voice_PlayVoice("B0405021_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "......... That's really ordinal.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Ordinal?\nDo you perhaps mean \"original\"?");
                Character_ChFace(0, 2, 3);
                Voice_PlayVoice("B0405021_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, yeah. Amazing, I've awakened.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405021_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "When I'm with you, I get stimulated\nin many ways, and it seems like I'll\ncreate something amazing...");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405021_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You're stimulating.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hmm, am I being complimented?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405021_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nDrawing clouds that look like cream\npuffs would be nice.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
