# Intel Galileo Guía de un Principiante
Una guía para cualquier persona que nunca ha utilizado una tablilla Intel Galileo Gen 2. Contiene información paso a paso además de segmentos de código que pueden utilizarse en las prácticas con el Intel Galileo. 

<h2>Introducción</h2>

He encontrado muchísimos sitios en internet que hablan acerca del Intel Galileo Gen 2, algunos de ellos resultan muy confusos o incluso, por el hecho de haber sido realizados en español, son complicados para hispanohablantes, es por esto que he decidido crear esta guía, para poder explicar un poco acerca de como utilizar el Galileo.

<h4>Para empezar:</h4>
Mucha de la información tendrá incluida su respectiva referencia, en su totalidad en inglés, por si alguno de ustedes la desean consultar.<br>
  <b>*Nota: Esta guía es específicamente para usuarios de Windows.</b>

<h4>Accesorios recomendados:</h4>
Para poder realizar la mayoría de las prácticas con el Galileo es necesario algunos accesorios que les darán un manejo más amplio de las funcionalidadesdel Galileo:
<ol>
  <li>Tarjeta de Red Inalámbrica (de Wifi) y Antenas
    <ul>
      <li>Si se consigue una tarjeta inalámbrica completa no es necesario conseguir coples (de otra manera si).</li>
      <li>Para más información puedes consultar: <a href="http://www.informaticamoderna.com/Tarjetas_red_inalam.htm">Informática Moderna</a>.</li>
    </ul>
  </li>
  <li>Una memoria SD (Entre los 2 GB y los 32 GB, una de 8 GB será suficiente)</li>
  <li>Un cable Serial, más un adaptador Serial - USB (aunque en un manual dentro de este repositorio pueden encontrar la manera de no necesitarlo.</li>
  <li>Un cable micro USB (como los usados en los cargadores de Android) </li>
</ol>
A pesar de que el Galileo lo utilicen para uso didáctico únicamente, podría ser benéfico que descargaran el <a href="http://iotdk.intel.com/">Developer Kit</a> de Intel, ya que puede ser utilizado en algunas prácticas que encuentren en internet.

<h4>Escogiendo una imagen de Linux</h4>
Si piensas utilizar el Intel Galileo sin una memoria SD, entonces mejor cambia de tablilla, ya que esta es una de las ventajas que tiene (entre muchas otras) ante las demás. La memoria SD te permite poner diferentes versiones de Linux y hasta experimentar con tus propias construcciones. La imagen que ofrece Intel para <a href="http://www.intel.com/support/galileo/sb/CS-035101.htm">descargar</a> <b>no contiene </b> todas las herramientas que una versión completa de Linux incluye (por ejemplo el uso de los comandos: <i>git, gcc, apt-get, make</i>, etc.), por eso puedes buscar otras alternativas.

Puedes construir tus propias imágenes y utilizarlas en tu Galileo, sin embargo ya requiere un conocimiento más amplio en desarrollo de Linux y, si estás empezando en el ambiente Linux, no es una recomendación que te doy para empezar.

También existe la posibilidad de que se incluya Debian en el Galileo. Se puede instalar y correra de una manera correcta, además de que tienes acceso a herramientas de Linux que la imagen de Intel no tiene. Sin embargo, requiere de tiempo y de conocimiento en Linux (al menos para saber que estás haciendo). Si te interesa realizar esto, puedes encontrar la manera de realizarlo <a href="https://communities.intel.com/thread/48074">aquí</a> o <a href="https://communities.intel.com/message/218148#218148">aquí</a> como método alterno.

<h4>Descargar Arduino IDE</h4>

Para los usuarios de Arduino, les advierto que el Arduino IDE utilizado para el Galileo (a pesar de parecer el mismo) es una modificación del Arduino IDE original, por lo tanto debe estar en un directorio diferente. Pueden encontrar la página de descarga del IDE <a href="http://www.intel.com/support/galileo/sb/CS-035101.htm">aquí</a>.

El Foro de Intel para Galileo está lleno de respuestas y buenas ideas, sin embargo se encuentra en inglés. Si estás interesado de conocer más puedes acceder a él sin ningún problema.

<b>¡Exito y espero les guste! </b>
