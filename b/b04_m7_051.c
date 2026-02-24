section "b04_m7_051"{
    int var0 = Date_GetDateOption(2, 13);
    if (var0 == 0){
        Character_Chara_GS2(7, "M7_06F", 0, 1, 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0407051_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I wanted to come here once.\nA place like this, indeed...");
        Message_MsgSel("It's like paradise, floating in the sky!", "It's a giant, 360 degree panorama!", "It's not actually in the sky!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407051_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Then we are Adam and Eve....\nYes, we are poets, indeed.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407051_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "A 360 degree panorama...\nOh, it must be from a poem.\nIs it a poem?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay, impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0407051_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I see... You are harsh.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(7, "M7_06F", 0, 1, 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0407051_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Oh, a dandelion.... I miss them.");
        Message_MsgSel("A seed flew over here.", "Unless they're pulled out, weeds are bad.", "The leaf resembles spinach.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(7, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407051_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It must have been carried by the\nstrong wind....\nI missed it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0407051_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I tried my best.\nIt's deeply rooted, though...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407051_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "If it looks edible, you may be able\nto eat it if you pull it out.\nIt will taste like the field.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(7, "M7_06F", 0, 1, 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 7, "B0407051_G00800");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝, how do you\nthink the people around view us?");
        Message_MsgSel("Probably as good friends or siblings?", "No matter how they see it, I don't care.", "As lovers...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(7, 3, (#1), 1);
            Voice_PlayVoice("B0407051_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That's delicate...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407051_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Is that right? ...\nYes, I don't care either.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 5);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0407051_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "............");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Oh... I'm sorry.");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(7, 2, (#1));
            Voice_PlayVoice("B0407051_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "For what?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I think I may have embarrassed\nyou...");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0407051_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes... I am embarrassed.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0407051_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "However, not because of you.\nOf myself... because I am a teacher.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What's the problem...?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("B0407051_G01500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well... Oh! Look, a telescope!\nLet's go!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what the problem was with\n｛Wakaouji＊＊｝...)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
