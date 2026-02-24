section "d01_ma_011"{
    Background_Bg_GS2("BG_SC100_?_1", #1, #1, 0);
    Screen_WipeIn(2);
    if (System_GlobalWork(18, 1) == 20){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Komori-kun finishes earlier than I\ndo today.\nIs he waiting...?)");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He probably went home already...\nI should go home, too.)");
        System_GlobalWork(18, 2, 1);
        }
    else if (System_GlobalWork(18, 1) == 21){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Komori-kun finishes earlier than I\ndo today.\nKomori-kun is...)");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I couldn't see him today,\neither...)");
        System_GlobalWork(18, 2, 1);
        }
    else if (System_GlobalWork(18, 1) == 22){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I might have finished earlier than\nusual!\nKomori-kun could still be in class.)");
        Message_MsgSel("I want to see him.", "It's nice that he's doing well.");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I should also wait for him\noccasionally.)");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Message_Who(0);
            Message_MsgDisp("主人公", "(There's 30 minutes left...\nWill Komori-kun be surprised?)");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            SoundEffect_PlayStream(3, "SS_DSE_113_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "(His class should be ending soon...\nAh!)");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(25, 2, (#1));
            Character_Chara_GS2(25, "MA_01F", 0);
            Music_PlayBGM(0, "MN_C_91_000_D00", 127, 40);
            Voice_PlayVoice("NS_91_000_09800", #1, "");
            Message_Who(25);
            Message_MsgDisp("Komori", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Komori-kun!\nI finished a little early today,\nso--");
            Voice_PlayVoice("NS_M1_911_00300", #1, "");
            Message_Who(0);
            Message_MsgDisp("Boy A", "Komori, you're slow! Hurry!");
            Voice_PlayVoice("NS_M2_911_00200", #1, "");
            Message_Who(0);
            Message_MsgDisp("Boy B", "Let's go! ...\nAh, you're from before.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("NS_M1_911_00400", #1, "");
            Message_Who(0);
            Message_MsgDisp("Boy A", "H-Hey, Komori.\nAs expected, this senior is your\ngirlfriend...");
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("NS_91_000_09900", #1, "");
            Message_Who(25);
            Message_MsgDisp("Komori", "No. Don't say rude things.\nShe's not my girlfriend. She's...");
            Message_Who(0);
            Message_MsgDisp("主人公", ".........");
            Voice_PlayVoice("NS_M2_911_00300", #1, "");
            Message_Who(0);
            Message_MsgDisp("Boy B", "S-So let's go then, okay?\nWe'll be leaving first!");
            Character_Chara_GS2(25, "NON");
            Music_StopBGM(0, 40);
            SoundEffect_PlayStream(3, "SS_DSE_071_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Komori-kun looks like he's doing\nwell.\nThat's nice...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It can't be helped, I'm not his\ngirlfriend.\nI said so myself...)");
            System_GlobalWork(18, 0, 23);
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "(I haven't seen him lately, but it's\nnice that he's doing well...\nKomori-kun, do your best!)");
            System_GlobalWork(18, 0, 31);
            break ;
            }
        }
    else if (System_GlobalWork(18, 1) == 24){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Komori-kun finishes earlier than I\ndo today...\nHe's there!\nHe was waiting for me...)");
        Character_ChFace(0, 0, 6);
        Character_ChFace(0, 4, 0);
        Character_Chara_GS2(25, "MA_01F", 0);
        Music_PlayBGM(0, "MN_C_91_000_D00", 127, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "Komori-kun!");
        Voice_PlayVoice("NS_91_000_10000", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "U-Umm...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah!");
        Voice_PlayVoice("NS_91_000_10100", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "My friends invited me to go\nsomewhere again today...");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Eh?");
        Voice_PlayVoice("NS_91_000_10200", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "But, I...\nwaited for you--");
        Message_Who(0);
        Message_MsgDisp("主人公", "... You want to go, right?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("NS_91_000_10300", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "Yeah, but...");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's fine. Just go.\nI'm sorry for making you wait, okay?");
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("NS_91_000_10400", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "... I'll go.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(25, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*... Why is he so indecisive?)");
        System_GlobalWork(18, 2, 1);
        }
    else if (System_GlobalWork(18, 1) == 25){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Komori-kun finishes earlier than I\ndo today...\nAh, as expected!)");
        Message_MsgSel("I should say what I want.", "It's not a good thing to be spoiled.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 4, 0);
            Character_Chara_GS2(25, "MA_01F", 0);
            Music_PlayBGM(0, "MN_C_91_000_D00", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Komori-kun.");
            Voice_PlayVoice("NS_91_000_10500", #1, "");
            Message_Who(25);
            Message_MsgDisp("Komori", "U-Um...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("NS_91_000_10600", #1, "");
            Message_Who(25);
            Message_MsgDisp("Komori", "... Are you angry?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm not. What is it?");
            Voice_PlayVoice("NS_91_000_10700", #1, "");
            Message_Who(25);
            Message_MsgDisp("Komori", "You seem angry, though...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I said I'm not angry! What's up?\nWere you invited somewhere by your\nfriends?");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("NS_91_000_10800", #1, "");
            Message_Who(25);
            Message_MsgDisp("Komori", "Yes, but today, um...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Isn't everyone waiting for you?\nIf you're so indecisive, you will\ntrouble everyone-- Ah...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("NS_91_000_10900", #1, "");
            Message_Who(25);
            Message_MsgDisp("Komori", "... Yeah. Y-You're right.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(25, 3, (#1));
            Character_Chara_GS2(25, "NON");
            Music_StopBGM(0, 40);
            SoundEffect_PlayStream(3, "SS_DSE_060_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "Komori-kun!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do...\nI definitely shouldn't have said\nthat...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I have to support him...)");
            System_GlobalWork(18, 0, 26);
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nIt's not a good thing to be spoiled.\nI'll leave him alone.)");
            System_GlobalWork(18, 0, 31);
            break ;
            }
        }
    Music_StopBGM(0, 40);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
