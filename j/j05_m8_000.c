section "j05_m8_000"{
    int var0;
    var0 = Date_Get_Date_Place();
    if (var0 == 0){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0508000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Yeah. Wanna go to the Shopping Mall?");
        }
    else if (var0 == 3){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0508000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "It seems like there's some\ninteresting performance on at the\nEvent Hall.\nWanna go check it out?");
        }
    else if (var0 == 4){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0508000_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I wanna go to the Sky Garden.\nWanna come with me?");
        }
    else if (var0 == 5){
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0508000_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Isn't there a Fireworks Festival?\nI was thinking of going.");
        }
    else if (var0 == 9){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0508000_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Yeah.\nSo do you wanna go relax at the\nBotanical Garden, then?");
        }
    else if (var0 == 10){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0508000_H00500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Yeah.\nSo let's go check out the Museum,\nthen.");
        }
    else if (var0 == 11){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0508000_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "How does ice skating sound?\nDo you wanna go too?");
        }
    else if (var0 == 14){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0508000_H00700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I was thinking of taking a stroll at\nthe shopping district.\nDo you wanna come with me?");
        }
    else if (var0 == 15){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0508000_H00800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I wanna go to the Live House.\nHow about it?");
        }
    else if (var0 == 16){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0508000_H00900", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I was thinking of going bowling or\nsomething.");
        }
    else if (var0 == 19){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0508000_H01000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "There's a movie I wanna see.\nDo you wanna go together?");
        }
    else if (var0 == 23){
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(8, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("J0508000_H01100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I wanna go to the Amusement Park.\nIt's been ages since I last went...\nHow about it?");
        }
    else if (var0 == 25){
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0508000_H01200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I was thinking of going on a drive\nor something.");
        }
    }
