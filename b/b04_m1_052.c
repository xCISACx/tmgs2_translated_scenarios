section "b04_m1_052"{
    if (System_GlobalWork(1, 1) == 0){
        Character_Chara_GS2(1, "M1_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401052_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I feel like I can reach the\nfireworks when I'm looking at them\nfrom this close.");
        Message_MsgSel("The night sky is the fireworks' canvas!", "What's inside the fireworks?", "It's loud.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401052_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well...\nYou wouldn't be able to see it if\nyou launched the fireworks in the\nafternoon, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401052_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, I hadn't thought about that...\nI wonder what the inside looks like?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401052_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Because we're close.\nBut it sends your heart racing,\nright?\nIt's thrilling.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 1){
        Character_Chara_GS2(1, "M1_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401052_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "The one they just launched...\nIt kinda looked like a smashed rice\nball, didn't it?");
        Message_MsgSel("Wasn't it a heart?", "So those are the ones that are shaped.", "Eh? Wasn't it a rice ball?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401052_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You replied so plainly...\nAh, whatever!\nI'll forgive you because it's the\nfireworks!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401052_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Eh... And? What was that shape?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401052_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It was a heart shape, wasn't it?\nWow, you really are an idiot...\nAhaha!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 2){
        Character_Chara_GS2(1, "M1_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401052_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "When I watch the fireworks, it\nreminds me of my childhood\nsummers...");
        Message_MsgSel("Like about girls you used to like?", "It's really nostalgic, isn't it?", "You'll remember this day too, one day.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(1, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401052_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... No comment.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401052_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... You?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Me? I...");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401052_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... I remember.\nThat girl I met in summer...\nI've been thinking about her a lot,\nlately.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm... Is that so.");
                Character_ChFace(0, 4, 1);
                Character_BlinkStart(1, 0, (#1));
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401052_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Haha, yeah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝...?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401052_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.... It's strange.\nThe memories of fireworks are all\nfun memories.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401052_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "There's no way you'd forget, right?\nI'll always remember this forever.\nWatching the fireworks with you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(5, 0, 1);
    }
