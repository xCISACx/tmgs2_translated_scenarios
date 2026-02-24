section "b04_m3_074"{
    int var0 = Date_GetDateOption(2, 21);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403074_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... The weather is nice.\nThis is the feeling of Summer.");
        Message_MsgSel("It's a shower of sunlight!", "I don't like Summer...", "It looks cooler in the shade of the trees.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 2, (#1), 1);
            Voice_PlayVoice("B0403074_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is so radiant that I am getting\ndizzy...\nIf there is a tap where the shower\nof sunlight comes from, I want to\nturn it off.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403074_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Truthfully, I do too.\nI get dizzy walking under the\nblazing sun....\nI shall go and buy a cold drink.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403074_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right.\nLet us try to walk under shelters or\nin the shade of trees....\nEven though it looks a little\nsuspicious.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403074_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThere are swallowtail butterflies\npassing.\nIt is a scene that is typical of\nSummer.");
        Message_MsgSel("Eh, where?", "I wonder if there's a mandarin tree nearby.", "Swallow? Butterflies? Which is it?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_BlinkStart(3, 0, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403074_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is unfortunate, they are not\naround anymore....\nI should have told you earlier,\nseeing as you like butterflies.");
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
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403074_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You are quite knowledgeable.\nThat is the kind of fruit the larvae\nlikes.\nYou understand that fact.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403074_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIt is not either, it is a\nSwallowtail Butterfly.\nA large, black butterfly.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403074_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nSometimes the passing wind feels\nindescribably nice.\nIt feels different to the\ntemperature in the city.");
        Message_MsgSel("Like a natural cooler!", "It's cooler by 3 degrees.", "Do you want to eat soft serve ice cream?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_BlinkStart(3, 0, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403074_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right.\nForests ease the greenhouse effect,\nso you could call it a high level\ncooler.");
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
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403074_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, about that much cooler.\nIt is the perfect temperature to\nchange your mood or to think about\nthings.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403074_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nThat has nothing to do with what we\nare talking about.\nWere you even listening to what I\nsaid?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(3, 0, (#1));
                Voice_PlayVoice("B0403074_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Right, it may be necessary to reduce\nour body temperature in order to\navoid a heat stroke.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0403074_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Actually, I have properly checked\neach place out.\nThey have a moderate variety.");
                Voice_PlayVoice("B0403074_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The standard vanilla, chocolate and\nstrawberry mix.\nThere also seems to be some made\nfrom tableland milk.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm～. Which should I get...");
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403074_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "L-Let us... decide as we walk.\nIt would be good if we could decide\nat the shop counter.");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403074_C01800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ah...\nThis sort of feels like a date...");
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
