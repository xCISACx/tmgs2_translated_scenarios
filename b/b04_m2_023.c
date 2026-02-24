section "b04_m2_023"{
    int var0 = Date_GetDateOption(2, 2);
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Character_ChFace(0, 2, 2);
    Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0402023_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... We're high up.");
        Message_MsgSel("I want to bungee jump from there!", "It looks like a scene from a movie.", "The bridge is shining beautifully.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("B0402023_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nGo by yourself, and as many times as\nyou want.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            Character_ChFace(0, 7, 0);
            Voice_PlayVoice("B0402023_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I don't wanna see this kinda movie.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402023_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It seems like at night, the\nilluminations are turned on.\nIs that what you're saying?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0402023_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hey, do you like high places?");
        Message_MsgSel("Yeah. Somehow, they make me feel refreshed.", "Who would like high places...?", "I like places that are even higher up.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402023_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well, I guess it's because you get a\nwide view of the sky.\nIt might make you feel good.");
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
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402023_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "What?\nYou don't like high places too?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(2, 3, (#1), 1);
            Voice_PlayVoice("B0402023_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You don't suit me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402023_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Why does everyone like going up to\nhigh places?");
        Message_MsgSel("Do you hate it, ｛Shiba＊＊｝?", "Isn't the vast sky exhilarating?", "We want to feel like king of the mountain!");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402023_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Leave me alone.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402023_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Yeah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "S-Sorry.\nI haven't considered your feelings\nat all.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402023_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's not your fault, I didn't tell\nyou.\nI don't like high places.");
                Message_Who(0);
                Message_MsgDisp("主人公", "So it's just been me that's been\nhaving fun...");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402023_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's fine. You seemed really happy.\nAnd...");
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402023_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "When I'm with you, I feel like I\nmight be able to overcome my weak\npoints...");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 2, 2);
                Voice_PlayVoice("B0402023_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... One by one.\nBut as expected, I can't handle high\nplaces.");
                Message_Who(0);
                Message_MsgDisp("主人公", "So should we go somewhere else?");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402023_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Okay.\nLet's take a walk around that area.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay!");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Character_BlinkStart(2, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402023_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I do...\nThere are also other places that\ngive you the same feeling but aren't\nhigh up, right?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(2, 2, (#1), 1);
            Voice_PlayVoice("B0402023_B01700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "This is fine for me.\nYou can be the king of the\nmountain....\nAn oblivious one.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
