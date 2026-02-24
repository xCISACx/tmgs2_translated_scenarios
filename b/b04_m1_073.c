section "b04_m1_073"{
    int var0 = Date_GetDateOption(2, 19);
    Effect_OpenParticle(0);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401073_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Amazing...\nThe flower petals are fluttering in\nthe wind.");
        Message_MsgSel("Wow, it's very magical.", "It's sad that it doesn't last long.", "Let's remember to take our garbage with us.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401073_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nIt's so beautiful that it's\nunbelievable...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Character_BlinkStart(1, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401073_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It is scenery that you can only see\nsee in spring....\nIt's like the fireworks in summer.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401073_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, you...... Whatever.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401073_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I honestly think that it's great\nthat I'm Japanese, but only in this\nseason.");
        Message_MsgSel("Because you can enjoy the magnificent view.", "Because sakura-mochi is yummy.", "It's the spirit of Japanese people.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0401073_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "But I don't know what to think of\nthose people having banquets out\nhere...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401073_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Sakura-mochi, huh... That's nice.\nMaybe we should sell it at Sangosho?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401073_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I see...\nI often hear that phrase, but it's\nmy first time actually feeling it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401073_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "These cherry blossoms will surely be\nblossoming like this when we\ngraduate...");
        Message_MsgSel("It feels mysterious...", "For some reason, I'm tearing up.", "When we do, let's go and drink a lot!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401073_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nIt doesn't feel that way at all, but\nthey will surely be blossoming...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401073_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "...... Hay fever, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0401073_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Why?");
                Message_Who(0);
                Message_MsgDisp("主人公", "As expected, I feel lonely...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0401073_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Me too.");
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401073_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No one knows what will happen from\nnow on, but let's come and see the\ncherry blossoms together again one\nday, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401073_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No, we can't drink.\nWell, not a lot, at least.");
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
    Effect_CloseParticle();
    }
