section "b04_m3_080"{
    int var0 = Date_GetDateOption(2, 24);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0403080_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "As expected, they attentively\nmaintain this place.\nAll the branches have flower buds.");
        Message_MsgSel("I'm happy being surrounded by flowers▼", "All these plants make the air so fresh!", "That fruit looks yummy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403080_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nRather than being \"surrounded by\nflowers\", it feels like we can be\nfree in places where there are\nflowers.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403080_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, that is right.\nPlants emit negative ions and\nphytonicides.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0403080_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Hey, you! Read the explanations.\nThat is a poisonous plant.\nIt is written that even the seeds\nare dangerous.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0403080_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I was quite intrigued by the\ntropical plant corner...\nWhat about you?");
        Message_MsgSel("I was fascinated by the pretty flowers▼", "The diversity of ferns deserved attention.", "I felt hot and worn out...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403080_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, speaking of which, they were\nblooming.\nWell, this is a greenhouse, so\nshouldn't we be able to enjoy it all\nyear?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403080_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I thought the same.\nI am deeply interested in the fact\nthat fossilized ferns generally have\nthe same shape.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403080_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIf I knew, I would have gone by\nmyself.\nI am sorry for not realizing it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0403080_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nIt seems like there is an English\ngarden where you can enjoy\ngardening.\nShould we go check it out?");
        Message_MsgSel("Yeah, let's go check it out!", "Aren't there any Japanese gardens?", "｛Hikami＊＊｝, gardening!?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403080_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Apparently the design was done by a\nfamous gardener.\nLet us observe how it is different\nfrom amateur gardeners.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403080_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "There seems to be a dry landscape\ngarden.\nAlthough you shouldn't expect to see\nflowers, there are a wide variety of\nmosses.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 3, (#1), 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0403080_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I do not mean that I garden.\nI was just saying that we should\ntake a look at the finished product.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0403080_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "What is with that reaction...?\nDo I seem like I am not suited to\ngardening?");
                Message_Who(0);
                Message_MsgDisp("主人公", "N-No...\nI just kind of couldn't picture it.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403080_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see...\nIf I tell you, you would understand:\nI aspire to have a spacious garden.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Aspire...?");
                Voice_PlayVoice("B0403080_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes.\nIt might be because the apartment\nthat I live at does not have a\ngarden, but...");
                Voice_PlayVoice("B0403080_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Walking in a garden that I have\nmaintained would feel kind of...\nexhilarating.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm...");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403080_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Like, \"If I ever own a house with a\ngarden, I will do this, and that\".\nHaha, it seems kind of childish,\nright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, not at all.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0403080_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nThen let us go check out the English\ngarden.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay!");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
