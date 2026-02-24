section "b04_m3_051"{
    int var0 = Date_GetDateOption(2, 13);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0403051_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "So this is the Sky Garden, huh...\nIt is a place with a nice view.");
        Message_MsgSel("It's like paradise, floating in the sky!", "It's a giant, 360 degree panorama!", "It's not actually in the sky!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403051_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nAre you secretly working for the\nmanager?\nI have heard that phrase before.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403051_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Ah, right.\nThere is nothing blocking your field\nof vision, so you can get an\nextensive view of the city.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403051_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Although tall buildings with a\nterrace are called sky gardens, the\nname is misleading.\nIt invites misunderstandings.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0403051_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "What a brilliant view...\nI wonder if the hanging gardens of\nBabylon are a match for this place.");
        Message_MsgSel("That's one of the 7 Wonders of the World.", "It's bad to compare the past with now.", "That's one of the 7 Wonders of the school.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403051_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, it is a wonder for something\nfrom the 6th century B.C, but\napparently, the height was around 25\nmeters.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403051_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Did I mishear you?\nI thought I heard the word...\n\"school\".\nNaturally, you said \"world\", right?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403051_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", ".........\nWell, I was just stating my thoughts\nabout history in my own way.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0403051_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I wonder why...\nThe things I usually worry about\nseem so insignificant when I am\nhere.");
        Message_MsgSel("It seems like we will forget about time...", "... Because we're close to the sky?", "Hmm, even you worry, ｛Hikami＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403051_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Has 12 minutes already passed?\nWhen I think about things, I still\nhave a sense of time.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403051_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, that is it!\nWhen I look down at the everyday\nlife from above, it gives me a\npseudo-god point of view.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403051_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... What do you mean by \"even you\"?\nI am a teenager with many worries.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403051_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Even I have one or two worries...\nHowever...");
                Message_Who(0);
                Message_MsgDisp("主人公", "However?");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403051_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It's just that...\nwhen I am alone, thinking, I have\nworries that I cannot escape from...");
                Voice_PlayVoice("B0403051_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "In other words, while being unable\nto know the other person's feelings,\nI am going around in circles.");
                Message_Who(0);
                Message_MsgDisp("主人公", "The other person's feelings...?");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403051_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Right....\nDo you have that kind of problem as\nwell?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm... I wonder?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403051_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... As expected, I cannot read you.\nIt seems like it will still take a\nlot of time before this issue is\nresolved.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
