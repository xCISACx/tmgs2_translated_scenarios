section "b04_m1_234"{
    int var0 = Date_GetDateOption(2, 71);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(1, 3, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401234_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... My heart stopped.");
        Message_MsgSel("It was scary, but I enjoyed being with you!", "I was so scared I shut my eyes...", "It felt like it was just childish tricks!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401234_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Because you wouldn't go in alone.\nEven if you were mistaken.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401234_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Me too, actually...\nWe did well to reach the exit...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_BlinkStart(1, 0, (#1), 1);
            Character_ChFace(0, 2, 0);
            Voice_PlayVoice("B0401234_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, you...\nYou really do have strong nerves.\nEven I feel jealous.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(1, 2, (#1));
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401234_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... This is no good.\nI will definitely see this in my\ndreams tonight.");
        Message_MsgSel("What if you bought a charm from a temple?", "Then stay up all night!", "It's not scary, you can wake up from it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401234_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right. I will.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(1, 3, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401234_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I can't stay awake by myself late at\nnight.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401234_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Even if I ask for advice from\nsomeone as strong as you, it's\nuseless...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401234_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Even though I know monsters don't\nexist, why am I so scared of them?");
        Message_MsgSel("You're a wimp...", "Surely, you must be delicate.", "I'm～ a～ mon～ ster～");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401234_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're wrong.\nMy power of imagination is just\nvivid, I'm sure.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401234_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah. I'll just say it's that.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0401234_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Are you making fun of me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401234_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hah... What is that?\nWere you trying to be scary?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ack...\nI'm～ very～ scary～ I'll be in your\ndreams～");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401234_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Do it.\nI'll make some coffee and wait for\nyou.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(He didn't hear me...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
