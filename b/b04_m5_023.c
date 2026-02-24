section "b04_m5_023"{
    int var0 = Date_GetDateOption(2, 2);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405023_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "What a nice view.");
        Message_MsgSel("I want to bungee jump from there!", "It looks like a scene from a movie.", "The bridge is shining beautifully.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405023_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If it were you, it'd look like you'd\ndo a carefree jump.\nLet's try it sometime.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405023_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nIt might be even better in the\nevening.");
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
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0405023_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's too shiny. It hurts my eyes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(5, 2, (#1));
        Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405023_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah!\nThere's something jumping in the\nwaves!");
        Message_MsgSel("A fish. It's just a fish.", "Eh, where?", "It's jumping really high.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405023_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... How cold...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405023_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Over there...\nHmm～, it's hard to explain.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405023_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nI wonder what kinda fish it is.\nI'm curious.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405023_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah, this scenery...\nIt kinda looks like the same scenery\nyou can see from dad's company.");
        Message_MsgSel("Isn't it just your imagination?", "Ehh. Whereabouts is it?", "So it's pretty, just like this place.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405023_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But it really looks the same.\nLike that kinda area...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405023_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But it really looks the same.\nLike that kinda area...");
                Voice_PlayVoice("B0405023_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Even the height of the buildings is\nthe same.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is that so.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405023_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah.\nThe offices in America have a view\nsimilar to this.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...\nDo you have offices outside of\nAmerica, too?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405023_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's a secret.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Why?");
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405023_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nBecause one day, we might go and see\nthe view together.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405023_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "So until then, look forward to it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What does that mean?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405023_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Kinda like the same as looking at\nthe ocean from here.\nAh, even the townscape looks\nsimilar.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405023_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's an amazing place that doesn't\nlose out to Habataki City.\nI want to take you there one day.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
