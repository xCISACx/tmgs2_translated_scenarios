section "b04_m1_236"{
    int var0 = Date_GetDateOption(2, 72);
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(1, 61, 3);
        Parameter_AddCh1Param(1, 60, 2);
        Parameter_AddCh1Param(1, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(1, 61, 2);
        Parameter_AddCh1Param(1, 60, 1);
        Parameter_AddCh1Param(1, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(1, 61, 1);
        Parameter_AddCh1Param(1, 60, 0);
        Parameter_AddCh1Param(1, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(1, 61, 0);
        Parameter_AddCh1Param(1, 60, #1);
        Parameter_AddCh1Param(1, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, #2);
        Parameter_AddCh1Param(1, 62, 2);
        }
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        Voice_PlayVoice("B0401236_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "How beautiful..\nIt's kinda overwhelming...");
        Message_MsgSel("It's like they came from a jewel box!", "I want to watch it forever...", "Let's dance together～▼.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401236_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Give me a break from this fairy-tale\nstuff.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401236_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right. I just thought of that too.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401236_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No way. I won't dance.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        Voice_PlayVoice("B0401236_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I wonder if the guys dancing on top\nof that float have fun doing it...");
        Message_MsgSel("Do you also want to try?", "Surely, it must be hard.", "The crowd's smiles encourage them.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401236_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401236_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Probably.\nThe guys in the mascot costumes must\nfeel like they're in a sauna, right?");
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
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401236_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, I get it.\nEven if it's tiring, it's a nice\nfeeling.\nIt's the fate of people who work in\nthe service industry.");
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
        Character_ChFace(0, 2, 3);
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        Voice_PlayVoice("B0401236_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That parade float really seems like\nit's going to fly...");
        Message_MsgSel("They'll be able to do that in the future.", "Because of the wings, right?", "It could fly if it had a child's heart!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401236_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, definitely.\nI want to see that.");
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
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401236_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nIt seems like it was quite\nexpensive.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 3, (#1), 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0401236_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I said give me a break from this\nfairy-tale stuff.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401236_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "That and fairy dust, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, so you know as well,\n｛Saeki＊＊｝!");
                Voice_PlayVoice("B0401236_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I wasn't a cynic from the moment I\nwas born.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401236_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "When I was a child, I believed in\nmany things.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I did too...");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401236_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Unicorns, right?\nAnd dragons, and witches and...\nmermaids.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So ｛Saeki＊＊｝ also\nbelieved in mermaids...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(3, 0, 1);
    System_GlobalWork(5, 0, 1);
    }
