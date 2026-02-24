section "b04_m3_052"{
    Character_Chara_GS2(3, "M3_D?F", 0, 1, 0);
    Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    if (System_GlobalWork(1, 1) == 0){
        Voice_PlayVoice("B0403052_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nWatching from the verandah at home\nis incomparable to this.\nIt was worth seeing.");
        Message_MsgSel("The night sky is the fireworks' canvas!", "What are inside the fireworks?", "It's loud.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0403052_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThe fireworks were only renting out\nsome space.\nI think that the night sky belongs\nprimarily to the light of the stars.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403052_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "A good question!\nWith the fireworks that burst from\nthe outside in, they pack it with\nlots of gunpowder from all angles.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403052_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, even being this close to it\nrumbles my stomach.\nThis is also one of the true charms\nof a fireworks festival.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 1){
        Voice_PlayVoice("B0403052_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Fireworks have their own colors and\nshapes...\nEven though I had planned to watch\nit normally, I think of many things.");
        Message_MsgSel("It's like bathing in a shower of light...", "Was the blue one oxidization of copper?", "Then recite some of your thoughts!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403052_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes.\nWhen we look at it from this\nposition, the fireworks above us\nappear to be showering us.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403052_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, blue is the oxidization of\ncopper, white of aluminium, and red\nis the oxidization of strontium.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403052_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", ".........\nUnfortunately, it did not stir up my\npower of imagination.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 2){
        Voice_PlayVoice("B0403052_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is almost over...\nThis year's fireworks display felt\nshort.");
        Message_MsgSel("Isn't it just your imagination?", "Time flies by when you're having fun.", "Because you were beside me!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403052_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... That surely must be the case.\nI have watched the fireworks for 3\nyears in a row, so perhaps I am just\nused to watching it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403052_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, perhaps that is the case.\nIt seems like I forget about the\ntime when I am bewitched by the\nfireworks.");
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
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 3, (#1), 1);
                Voice_PlayVoice("B0403052_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nDo people's sense of time go astray\nwhen they are next to you?\nAre you emitting some kind of\nmagnetic force?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403052_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh.........\nYou said it so straightforwardly...");
                Message_Who(0);
                Message_MsgDisp("主人公", "?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403052_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Even though it is already my 3rd\ntime attending the fireworks\nfestival, why is this the only\nyear...");
                Voice_PlayVoice("B0403052_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "that I think of the sign that\nsignals the end of the display as\ncruel and unkind...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "The only year...?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403052_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes...\nThe venue is the same, who I am\nwatching it with is the same, so why\ndoes it feel different, then?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Hmm, I wonder?");
                Voice_PlayVoice("B0403052_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It's...\nI think that the only thing that has\nchanged is my feelings.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Is this about psychology?\nThat's a bit difficult...");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403052_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", ".........\nIt actually is not difficult. But...\nI cannot explain it well.");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 4, 1);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403052_C01800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It would be nice if I could tell you\none day, but I wonder if that day\nwill come...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(... ｛Hikami＊＊｝?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (System_GlobalWork(1, 1) == 2){
        if (Parameter_ChkSpEvent("B05", "M3", 1) == 1){
            System_Call_GS2("B05", "M3", 1);
            }
        }
    System_GlobalWork(5, 0, 1);
    }
